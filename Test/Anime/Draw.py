import csv
import os
import time

import numpy as np
import matplotlib.pyplot as plt


def read_csv_file(file_path):
    with open(file_path, 'r') as f:
        reader = csv.reader(f)
        data = [row for row in reader]
        data = np.array(data, dtype=float)
        return data


def main():
    # read csv file
    while(1):
        file_path = os.path.join(os.path.dirname(__file__), 'vertex.csv')
        data = read_csv_file(file_path)

        plt.plot(data[0:len(data), 0], data[0:len(data), 1], '-', color='black')
        plt.plot(data[0:len(data), 2], data[0:len(data), 3], '-', color='black')
        plt.plot(data[0:len(data), 4], data[0:len(data), 5], '-', color='black')
        plt.plot(data[0:len(data), 6], data[0:len(data), 7], '-', color='black')


        for c in range(2,7,2):
            plt.fill([data[i, 0] for i in range(0, len(data))]+[data[i, c] for i in range(len(data)-1,-1,-1)],
                     [data[i, 1] for i in range(0, len(data))]+[data[i, c+1] for i in range(len(data)-1,-1,-1)],
                     color='black', alpha=0.9)

        for c in range(4,7,2):
            plt.fill([data[i, 2] for i in range(0, len(data))]+[data[i, c] for i in range(len(data)-1,-1,-1)],
                     [data[i, 3] for i in range(0, len(data))]+[data[i, c+1] for i in range(len(data)-1,-1,-1)],
                     color='black', alpha=0.9)

        plt.fill([data[i, 4] for i in range(0, len(data))]+[data[i, 6] for i in range(len(data)-1,-1,-1)],
                 [data[i, 5] for i in range(0, len(data))]+[data[i, 7] for i in range(len(data)-1,-1,-1)],
                 color='black', alpha=0.9)

        plt.xlim(-10,10)
        plt.ylim(-10,10)
        plt.show()

        # delay 0.4 second
        time.sleep(1)


if __name__ == '__main__':
    main()

