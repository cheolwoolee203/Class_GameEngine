# Class_GameEngine2021
GameEngine 수업자료

1. 10주차 Cartoon rendering을 postprocessing으로 구현

![cartoonshader](https://user-images.githubusercontent.com/71004742/187103862-ce14342c-7655-4895-827c-24c64a87ddd1.JPG)

Unreal에서 postprocessing을 이용하여 cartoon rendering같은 느낌을 구현하였습니다

외각선 강조 방법과 cel-shader를 구현하였습니다

cartoon rendering에 대한 간략한 개념과 구현방법을 설명하고 실제 구현까지 진행했습니다


2. 12주차 animation notify을 통해 연속공격 입력 구현



https://user-images.githubusercontent.com/71004742/187107883-1be026a2-3f85-4771-b17d-107d57a2743d.mp4



Unreal에서 무료로 배포하는 Paragon의 Kwang 에셋을 받아서 사용하였습니다

마우스 클릭을 하면 캐릭터가 공격을 하고 만약 마우스를 연속으로 누른다면 연속공격을 합니다

이건 애니메이션에 notify가 있어 이 notify안에 입력이 온다면 다음 state로 넘어갈수있게 되어있습니다

이것을 blueprint와 c++ 두가지 방법으로 구현하였습니다
