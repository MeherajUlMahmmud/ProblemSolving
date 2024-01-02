class Solution(object):
    def convertTemperature(self, celsius):
        """
        :type celsius: float
        :rtype: List[float]
        """

        return round(celsius + 273.15, 5), round(celsius * 1.8 + 32, 5)
