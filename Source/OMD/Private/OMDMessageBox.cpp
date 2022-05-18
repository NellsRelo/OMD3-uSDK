#include "OMDMessageBox.h"

void UOMDMessageBox::SetType(EOMDMessageBoxType NewType) {
}

void UOMDMessageBox::SetText(FText NewText) {
}

void UOMDMessageBox::SetCaption(FText NewCaption) {
}

void UOMDMessageBox::HandleResult(EOMDMessageBoxResult Result) {
}

EOMDMessageBoxType UOMDMessageBox::GetType() const {
    return EOMDMessageBoxType::None;
}

FText UOMDMessageBox::GetText() const {
    return FText::GetEmpty();
}

FText UOMDMessageBox::GetCaption() const {
    return FText::GetEmpty();
}


UOMDMessageBox::UOMDMessageBox() {
    this->Type = EOMDMessageBoxType::OK;
}

