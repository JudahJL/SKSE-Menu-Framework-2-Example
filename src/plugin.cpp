#include "Plugin.h"

void OnMessage(SKSE::MessagingInterface::Message* message) {
    switch(message->type) {
        case SKSE::MessagingInterface::kDataLoaded:
            UI::Example1::LookupForm();
            break;
        default:
            break;
    }
}

SKSEPluginLoad(const SKSE::LoadInterface* skse) {
    SKSE::Init(skse);
    SKSE::GetMessagingInterface()->RegisterListener("SKSE", OnMessage);
    SetupLog();
    logger::info("Plugin loaded");
    UI::Register();
    return true;
}