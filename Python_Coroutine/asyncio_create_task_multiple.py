'''
This is the file about how to create multiple task and run at the same time.
'''

import asyncio
import time
now = lambda:time.time()


async def dosomething(num):
    print("This is {} mission, Step 1".format(num))
    await asyncio.sleep(2)
    print("This is {} mission, Step 2".format(num))
    return "The {} mission completed.".format(num)


async def raise_error(num):
    raise ValueError


async def main():
    tasks = [dosomething(i) for i in range(5)]
    tasks_error = [raise_error(i) for i in range(5)]

    results = await asyncio.gather(*tasks, *tasks_error, return_exceptions=True)
    print(results)

if __name__ == "__main__":
    start = now()
    asyncio.run(main())
    print('Time: {}'.format(now()-start))
