<h1 align="center">The Google File System</h1>
<h3 align="center">Sanjay Ghemawat,Howard Gobioff,and Shun-Tak Leung</h3>
<h4 align="right">Translator:Tsand</h4>
<h4 align="right">Time:2019/4/25</h4>  

<br>


## ABSTRACT
> 我们已经设计和实现了谷歌文件系统：一个针对大型数据密集型应用的分布式系统。即使运行在不昂贵的商业硬件上上她也表现出很好的容错性，与此同时她在大量客户端上显示出很高的性能。
> 尽管像先前分布式文件系统那样分享了很多相同目标，我们的设计源于对我们应用的工作负载，技术环境的观察，从当前和期盼角度，这都体现了与一些早期文件系统假设的标志性区别。这让我们得以重新检查传统的方案和有效的探索不同的设计点。
>该文件系统成功的满足了我们的存储需求。
