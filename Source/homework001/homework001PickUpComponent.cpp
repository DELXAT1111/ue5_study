// Copyright Epic Games, Inc. All Rights Reserved.

#include "homework001PickUpComponent.h"

Uhomework001PickUpComponent::Uhomework001PickUpComponent()
{
	// Setup the Sphere Collision
	SphereRadius = 32.f;
}

void Uhomework001PickUpComponent::BeginPlay()
{
	Super::BeginPlay();

	// Register our Overlap Event
	OnComponentBeginOverlap.AddDynamic(this, &Uhomework001PickUpComponent::OnSphereBeginOverlap);
}

void Uhomework001PickUpComponent::OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// Checking if it is a First Person Character overlapping
	Ahomework001Character* Character = Cast<Ahomework001Character>(OtherActor);
	if(Character != nullptr)
	{
		// Notify that the actor is being picked up
		OnPickUp.Broadcast(Character);

		// Unregister from the Overlap Event so it is no longer triggered
		OnComponentBeginOverlap.RemoveAll(this);
	}
}
