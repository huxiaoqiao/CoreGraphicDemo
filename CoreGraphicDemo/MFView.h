//
//  MFView.h
//  CoreGraphicDemo
//
//  Created by 胡晓桥 on 15/1/30.
//  Copyright (c) 2015年 Qian100. All rights reserved.
//

#import <UIKit/UIKit.h>

/*
 绘图的步骤：
    1.获取绘图上下文
    2.创建并设置路径
    3.将路径添加到上下文
    4.设置上下文状态
    5.绘制路径
    6.释放路径
 */

@interface MFView : UIView
- (void)drawRect:(CGRect)rect;
@end
