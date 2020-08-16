class Car:
    def __init__(self,color,speed=0):
        self.color = color
        self.speed = speed
    def speedUp(self):
        self.speed +=10
    def speedDown(self):
        self.speed-=10
    def __str__(self):
        return "color = %s, speed = %d"%(self.color,self.speed)

class SuperCar(Car):
    def __init__(self,color,speed=0,Turbo=True):
        super().__init__(color,speed)
        self.Turbo = Turbo
    def setTurbo(self):
        self.Turbo = Turbo
    def speedUp(self):
        if self.Turbo:
            self.speed+=50
        else:
            super().speedUp()
        
s1 = SuperCar("Gold",0,True)
s2 = SuperCar("White",0,False)
s1.speedUp()
s2.speedUp()
print("수퍼카1: ",s1)
print("수퍼카2: ",s2)