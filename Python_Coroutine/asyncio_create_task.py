'''
This is the file about how to use syncio.create_task().

'''

import asyncio
import time

# Normal


def dosomething(num):
    print("start {}". format(num))
    print("sleep {}".format(num))
# Use asyncio


async def dosomething_asyncio(num):
    print("start {}". format(num))
    await asyncio.sleep(num)
    print("sleep {}".format(num))


async def main():
    task = []
    for i in range(1, 4):
        task.append(asyncio.create_task(dosomething_asyncio(i)))
    for i in range(3):
        await task[i]


if __name__ == "__main__":
    start = time.time()
    for i in range(1,4):
        dosomething(i)
    print("time: {}".format(time.time() - start))
    start = time.time()
    asyncio.run(main())
    print("time: {}".format(time.time() - start))
