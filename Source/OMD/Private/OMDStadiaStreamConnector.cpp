#include "OMDStadiaStreamConnector.h"

UOMDStadiaStreamConnector::UOMDStadiaStreamConnector() {
}

bool UOMDStadiaStreamConnector::SubscribeToPlayerStream(int32 PlayerId, const FString& streamName) {
    return false;
}

FString UOMDStadiaStreamConnector::GetStreamSourceURL(APlayerState* PlayerState) {
    return TEXT("");
}

bool UOMDStadiaStreamConnector::CreateStreamSourceFromPrimary(const FString& streamName) {
    return false;
}

bool UOMDStadiaStreamConnector::CreateStreamSource(const FString& streamName) {
    return false;
}


