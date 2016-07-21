####pod引用方式

pod 'XXLazyKit', :git => 'https://github.com/PittWong/XXLazyKit.git'


> 1.类扩展,提供便捷的常用接口
> 
> 2.一句宏定义搞定懒加载
> 
> 3.一句宏定义搞定常用控件设置
> 
> 4.常用折线统计图,柱状图
> 
> 5.XXButtonLikeCell解决如基本资料等设置类list用tableView不便的情况


####懒加载控件
```
@property (nonatomic ,weak) UIButton *button;

@property (nonatomic ,weak) UITableView *tableView;

/******************************/


XXLazyButton(self.view, button)

XXLazyTableView(self.view, tableView)

```

####快速设置控件属性
```

XXLazySetTableView([UITableViewCell class], @"cell", [UIColor redColor]);

XXLazySetButton(button, self, buttonClick:, @"pitt", imageName1, imageName2, 0);
```
####XXButtonLikeCell


![3BA25AF1-88D1-4E67-8245-B49CE01D1469.png](http://upload-images.jianshu.io/upload_images/2103008-135c83276e15ca07.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)
####折线统计图,柱状图

![6864D13F-7399-41CF-A956-4A0D2568DAEE.png](http://upload-images.jianshu.io/upload_images/2103008-39f7340e3654d312.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)

