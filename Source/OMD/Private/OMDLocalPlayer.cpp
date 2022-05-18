#include "OMDLocalPlayer.h"

bool UOMDLocalPlayer::ShouldUseNPE() const {
    return false;
}

FOMDSoftProtoPtr UOMDLocalPlayer::GetCurrentCharacter() const {
    return FOMDSoftProtoPtr{};
}

UOMDLocalPlayer::UOMDLocalPlayer() {
}

