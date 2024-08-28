import random

def generate_rfid_code():
    prefix = "".join(random.choices("0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ", k=2))
    main_code = "".join(random.choices("0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ", k=12))
    suffix = "".join(random.choices("0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ", k=2))

    return prefix + "-" + main_code + "-" + suffix

print(generate_rfid_code())