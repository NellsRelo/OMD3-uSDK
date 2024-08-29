#include "OMDLocalPlayer.h"

UOMDLocalPlayer::UOMDLocalPlayer() {
}

bool UOMDLocalPlayer::ShouldUseNPE() const {
    return false;
}

FOMDSoftProtoPtr UOMDLocalPlayer::GetCurrentCharacter() const {
    return FOMDSoftProtoPtr{};
}


