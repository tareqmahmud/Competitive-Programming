def computeDifference(self):
    self.maximumDifference = 0
    for a in self.__elements:
        for b in self.__elements:
            if abs(a - b) > self.maximumDifference:
                self.maximumDifference = abs(a - b)
    return self.maximumDifference