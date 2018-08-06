import string
import random

class Robot(object):
    existing_robots = set()
    
    def __init__(self):
        self.name = self.generate_name()

    def generate_name(self):
        while True:
            new_name = ''.join(random.choices(string.ascii_uppercase, k=2))
            new_name += ''.join(random.choices(string.digits, k=3))

            if new_name not in self.existing_robots:
                break

        self.existing_robots.add(new_name)

        return new_name
    
    def reset(self):
        old_name = self.name
        self.name = self.generate_name()
        self.existing_robots.remove(old_name)

