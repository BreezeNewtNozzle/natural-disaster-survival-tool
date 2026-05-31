import time
import random
from colorama import Fore, Style, init

init(autoreset=True)

def scan_disasters(config):
    disasters = ["flood", "meteor", "earthquake", "tsunami", "volcano"]
    active = []
    print(f"{Fore.CYAN}[SCANNER] Scanning for active disasters...")
    time.sleep(config.get("scan_interval", 0.5))
    for d in disasters:
        if random.random() < 0.2:
            active.append(d)
            print(f"{Fore.RED}[ALERT] {d.upper()} detected!")
    return active