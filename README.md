> 1.类扩展,提供便捷的常用接口
> 
> 2.一句宏定义搞定懒加载
> 
> 3一句宏定义搞定常用控件设置


####懒加载控件
```
@property (nonatomic ,weak) UIButton *button;

@property (nonatomic ,weak) UITableView *tableView;
/******************************/
XXLazyButton(self.view, button)

XXLazyTableView(self.view, tableView)
//
```

####快速设置控件属性
```

XXLazySetTableView([UITableViewCell class], @"cell", [UIColor redColor]);

XXLazySetButton(button, self, buttonClick:, @"pitt", imageName1, imageName2, 0);
```
