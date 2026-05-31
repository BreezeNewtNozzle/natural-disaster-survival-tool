import pyautogui
import time
from colorama import Fore, init

init(autoreset=True)

def auto_evade(disasters, config):
    if not config.get("auto_evade", True):
        print(f"{Fore.YELLOW}[EVADER] Auto-evade disabled.")
        return
    print(f"{Fore.GREEN}[EVADER] Evading {len(disasters)} disaster(s)...")
    for disaster in disasters:
        if disaster == "flood":
            pyautogui.press("space")
            print(f"{Fore.MAGENTA}Jumped to avoid flood.")
        elif disaster == "meteor":
            pyautogui.moveRel(100, 0, duration=0.1)
            print(f"{Fore.MAGENTA}Dodged meteor.")
        elif disaster == "earthquake":
            pyautogui.press("c")
            print(f"{Fore.MAGENTA}Crouched for earthquake.")
        time.sleep(0.2)