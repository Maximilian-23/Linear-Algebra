
#include <stdio.h>

// ======================================
// Command and Control (C2)
// ======================================
 
#pragma section(".C2", read, write)

__declspec(allocate(".C2"))
const char c2_server[] = "https://MyCommendControlCenter.com/api/checkin";

__declspec(allocate(".C2"))
const char campaign_id[] = "CAMPAIGN-2026-Fall";

__declspec(allocate(".C2"))
const int beacon_interval = 60;

__declspec(allocate(".C2"))
const char target_process[] = "chrome.exe";


// ======================================
// Original Main Function (UNCHANGED)
// ======================================

int main() {
    printf("***************************\n");
    printf("* CS 440/540 PE Test File *\n");
    printf("***************************\n");
    return 0;
}
