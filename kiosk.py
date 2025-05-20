def session_counter():
    counter = 0  
    counter += 1
    print(f"Session visits: {counter}")

def kiosk_usage():
    if not hasattr(kiosk_usage, "total_users"):
        kiosk_usage.total_users = 0  
    kiosk_usage.total_users += 1
    print(f"Total users today: {kiosk_usage.total_users}")

def main():
    customer = 1
    while True:
        user_input = input(f"\nPress ENTER to start Customer Session {customer} (or type 'q' to quit): ")
        if user_input.lower() == 'q':
            print("\nKiosk shutting down. Total users today:", kiosk_usage.total_users)
            break
        print(f"Customer Session {customer} started:")
        for _ in range(5):
            session_counter()  
        kiosk_usage()  
        customer += 1

main()
