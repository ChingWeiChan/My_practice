'''
This is the example about how to use asyncio library.

Requirements:
    python : 3.7+
'''
import asyncio
import time


def now(): return time.time()


def dosomething(num):
    print("This is {} misson,step one.".format(num))
    print("This is {},step two.".format(num))


async def dosomething_async(num):
    print("This is {} misson,step one.".format(num))
    await asyncio.sleep(2)
    print("This is {},step two.".format(num))

if __name__ == "__main__":
    # Normal
    start = now()
    for i in range(5):
        dosomething(i)
    print("\nNormal Time:{}\n".format(now()-start))
    # Use asyncio
    start = now()
    tasks = [dosomething_async(i) for i in range(5)]
    asyncio.run(asyncio.wait(tasks))
    print("\nasyncio Time:{}\n".format(now()-start))

'''
If we use normal function, it costs 8 seconds.
However, use asncio library, it only costs 2 secounds.
'''
