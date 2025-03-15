#ifndef __ASW__
#define __ASW__

/*
 * Asynchronous Serial Wire (ASW) on STM32
 * ---------------------------------------
 * ASW (Asynchronous Serial Wire) is a debugging and communication interface
 * used in STM32 microcontrollers. It is based on the Serial Wire Debug (SWD) protocol
 * but operates asynchronously, allowing real-time debugging and monitoring.
 *
 * Enabling ASW on STM32:
 * ----------------------
 * 1. Ensure your STM32 supports ASW and the necessary SWD pins (SWCLK, SWDIO) are available.
 * 2. Enable the Debug Module in STM32CubeMX:
 *    - Open STM32CubeMX
 *    - Go to "System Core" -> "Debug"
 *    - Select "Serial Wire" mode
 * 3. Configure the GPIOs for SWD functionality:
 *    - SWDIO (PA13) and SWCLK (PA14) must be set to Alternate Function Mode.
 * 4. Connect an ST-Link debugger to the SWD pins.
 * 5. In STM32CubeIDE, ensure the debugger settings are correct:
 *    - Debug Probe: "ST-LINK (SWD)"
 *    - Enable "Asynchronous Trace" if available.
 * 6. Flash the firmware and start debugging with real-time variable tracking.
 *
 * Example:
 * --------
 * // Enable Debug in main.c
 * int main(void) {
 *     HAL_Init();                // Initialize the Hardware Abstraction Layer
 *     SystemClock_Config();       // Configure system clock
 *
 *     // Enable Debug in low-power modes (optional)
 *     __HAL_DBGMCU_FREEZE_IWDG(); // Keep watchdog running during debug
 *
 *     while (1) {
 *         HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_5); // Toggle an LED for testing
 *         HAL_Delay(500);  // Delay 500ms
 *     }
 * }
 *
 * Notes:
 * - ASW is useful for real-time debugging, data logging, and non-intrusive monitoring.
 * - Ensure SWD is not disabled by firmware, as it may prevent reprogramming.
 */
#endif
