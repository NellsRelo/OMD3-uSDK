#include "OMDMessageBox.h"

UOMDMessageBox::UOMDMessageBox() {
    this->Caption = FText::FromString(TEXT("Caption"));
    this->Text = FText::FromString(TEXT("Text"));
    this->Type = EOMDMessageBoxType::OK;
}

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



