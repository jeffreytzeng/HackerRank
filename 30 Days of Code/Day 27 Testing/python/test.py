import unittest
from minimum_index import minimum_index

class ArrayTest(unittest.TestCase):
    def test_empty_array(self):
        try:
            array = list()
            minimum_index(array)
        except ValueError as e:
            pass
        else:
            assert False, "Empty Array Cannot Be Caught!"

    def test_find_minimum_value_array(self):
        array = [3, 2, 4, 1, 6]
        self.assertEqual(array.index(min(array)), minimum_index(array))

    def test_first_minimum_value_array(self):
        array = [2, 1, 3, 3, 4, 1]
        index = 0

        for i in range(len(array)-1):
            if array[i] < array[index]:
                index = i

        self.assertEqual(index, minimum_index(array))

unittest.main()