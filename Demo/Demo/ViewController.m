//
//  ViewController.m
//  Demo
//
//  Created by 王旭 on 16/5/18.
//  Copyright © 2016年 Pitt. All rights reserved.
//
#import "XXExtensionHeader.h"

#import "ViewController.h"

@interface ViewController ()
@property (nonatomic ,weak) UIButton *button;
@property (nonatomic ,weak) UITableView *tableView;
@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];

    
    // Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}
- (void)buttonClick:(UIButton *)button {
    
}
XXLazyButton(self.view, button)
XXLazyTableView(self.view, tableView)
@end
