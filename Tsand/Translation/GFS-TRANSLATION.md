<h1 align="center">The Google File System</h1>
<h3 align="center">Sanjay Ghemawat,Howard Gobioff,and Shun-Tak Leung</h3>
<h4 align="right">Translator:Tsand</h4>
<h4 align="right">Begin Time:2019/4/25</h4>
<h4 align="right">  End Time:~~~~</h4>

<br>

## ABSTRACT
> 我们已经设计和实现的谷歌文件系统：一个针对大型数据密集型应用的分布式系统。即使运行在不昂贵的商业硬件上上她也表现出很好的容错性，与此同时她在大量客户端上显示出很高的性能。

> 尽管像先前分布式文件系统那样有很多相同目标，我们的设计源于对我们应用的工作负载，技术环境的观察，从当前和期盼角度，这都体现了与一些早期文件系统模型的标志性区别。这让我们得以重新检查传统的方案和有效的探索不同的设计点。

> 该文件系统成功的满足了我们的存储需求。她被谷歌广泛的用于由我们服务器产生和处理数据的存储平台以及调研及开发那些需要大数据节点的应用。最大的数据簇提供经过超过一千台机器上的上万块硬盘数以万计T字节的存储，也被上前台服务器并发的访问。

> 在这篇论文中，我们描述设计用于分布式应用的文件系统的表面扩展，谈及我们设计的许多方面并且报告理论实验室和现实使用的评测。

## Categories and Subject Descriptors

> D[4]:3--Distributed file systems

## General Terms

> Design ,reliability, performance,measurement

## Keywords

> Fault tolerate,scalability,data storage,clustered storage

## 1. INTRODUCTION
> 我们设计和实现的谷歌文件系统满足谷歌日益快速增长的数据处理需求。GFS拥有之前分布式文件系统的很多目标例如：表现，可扩展性，可靠性和实用性。但是她的设计源于我们对我们应用的工作负载技术环境的关键观察。从当前和预期角度都与之前的文件系统模型有着很大区别。我们已经重新检查传统的选择点并且探索出在设计方面更加实用的方案。

> 首先，组件错误是常态而不是例外。该文件系统由上千台甚至上万台由并不昂贵的商业零件组成并被大量客户端机器并发访问。组件的数量及质量表明有些在指定时间内不工作有些在出现错误时不能恢复。
