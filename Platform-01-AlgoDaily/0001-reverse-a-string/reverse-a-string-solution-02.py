# This is my solution for AlgoDaily problem Reverse a String
# Located at https://algodaily.com/challenges/reverse-a-string

# uses Two Pointer Technique
def reverse_string(str1):
    half = len(str1) // 2
    if len(str1) % 2 == 0:
        new_str = ""
    else:
        new_str = str1[half]
    for idx in range(half):
        fw = half - 1 - idx
        bw = idx - half
        new_str = str1[bw] + new_str
        new_str += str1[fw]
    
    return new_str
    
import unittest


class Test(unittest.TestCase):
    def test_1(self):
        assert reverse_string("njnschnjkdasn j32 uida") == "adiu 23j nsadkjnhcsnjn"
        print(
            "PASSED: reverse_string('njnschnjkdasn j32 uida') should return 'adiu 23j nsadkjnhcsnjn'"
        )

    def test_2(self):
        assert reverse_string("timbuktu12") == "21utkubmit"
        print("PASSED: reverse_string('timbuktu12') should return '21utkubmit'")

    def test_3(self):
        assert reverse_string("") == ""
        print("PASSED: reverse_string('') should return ''")

    def test_4(self):
        assert reverse_string("reverseastring") == "gnirtsaesrever"
        print("PASSED: reverse_string('reverseastring') should return 'gnirtsaesrever'")


if __name__ == "__main__":
    unittest.main(verbosity=2)
    print("Nice job, 4/4 tests passed!")