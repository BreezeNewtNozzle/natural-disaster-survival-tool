import sys
import time
from src import load_config, scan_disasters, auto_evade
from colorama import Fore, init

init(autoreset=True)

def main():
    print(f"{Fore.YELLOW}Natural Disaster Survival Tool v1.0")
    config = load_config()
    print(f"{Fore.CYAN}Config loaded: {config}")
    try:
        while True:
            disasters = scan_disasters(config)
            if disasters:
                auto_evade(disasters, config)
            else:
                print(f"{Fore.GREEN}[SAFE] No disasters detected.")
            time.sleep(config.get("scan_interval", 0.5))
    except KeyboardInterrupt:
        print(f"\n{Fore.RED}Exiting tool.")
        sys.exit(0)

if __name__ == "__main__":
    main()