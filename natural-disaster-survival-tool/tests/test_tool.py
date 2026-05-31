import unittest
from src.config import load_config, save_config
from src.scanner import scan_disasters
import os

class TestTool(unittest.TestCase):
    def test_load_config_default(self):
        config = load_config()
        self.assertIn("auto_evade", config)
        self.assertIn("scan_interval", config)

    def test_save_and_load_config(self):
        test_config = {"auto_evade": False, "scan_interval": 1.0, "disaster_targets": ["flood"]}
        save_config(test_config)
        loaded = load_config()
        self.assertEqual(loaded, test_config)
        os.remove("config.json")  # cleanup

    def test_scan_disasters_returns_list(self):
        config = {"scan_interval": 0.1}
        result = scan_disasters(config)
        self.assertIsInstance(result, list)

if __name__ == "__main__":
    unittest.main()