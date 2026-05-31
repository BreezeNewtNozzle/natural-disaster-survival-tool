import json
import os

CONFIG_PATH = os.path.join(os.path.dirname(__file__), "..", "config.json")

def load_config():
    if not os.path.exists(CONFIG_PATH):
        return {"auto_evade": True, "scan_interval": 0.5, "disaster_targets": ["flood", "meteor", "earthquake"]}
    with open(CONFIG_PATH, "r") as f:
        return json.load(f)

def save_config(config):
    with open(CONFIG_PATH, "w") as f:
        json.dump(config, f, indent=4)