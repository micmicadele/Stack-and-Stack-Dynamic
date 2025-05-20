# Self-Service Kiosk Simulation

## Overview

This project simulates a **self-service kiosk system** used in a retail store to track customer sessions and total users served during the day.

It demonstrates the difference between:
- **Stack-dynamic variables** (reset each function call, like a session counter)
- **Static local variables** (persist across function calls, like a global usage counter)

The simulation is provided in both **Python** and **C** for educational purposes.

---

## Program Structure

### 1. Session Counter (`session_counter`)

- Simulates a **temporary session variable**.
- Resets every time the function is called (stack-dynamic behavior).
- Called multiple times per customer session, showing the counter resets each call.
- Prints `"Session visits: 1"` every call to indicate reset behavior.

### 2. Kiosk Usage Counter (`kiosk_usage`)

- Simulates a **persistent global counter**.
- Uses a static variable (in C) or function attribute (in Python) to retain state.
- Incremented once per customer session.
- Prints total users served so far.

---

## Python 

- Uses a function attribute `kiosk_usage.total_users` for persistence.
- Local variable `counter` in `session_counter` resets every call.
- User can simulate unlimited customer sessions by pressing ENTER, or quit by typing `q`.

## C 
- Uses static int total_users inside kiosk_usage to persist the user count.
- Local variable counter inside session_counter resets on each call.
- Interactive loop with input prompts to simulate multiple customer sessions.
- User can quit by typing q or Q.
