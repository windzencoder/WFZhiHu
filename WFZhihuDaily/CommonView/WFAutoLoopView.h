//
//  WFAutoLoopView.h
//  WFZhihuDaily
//
//  Created by xiupintech on 16/1/6.
//  Copyright © 2016年 xiupintech. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WFBannerModel.h"

/**
 *  循环图
 */
@interface WFAutoLoopView : UIView

/**
 *  点击图片事件回调
 */
@property (nonatomic, copy)   void(^clickAutoLoopCallBackBlock)(WFBannerModel *banner);

/**
 *   是否自动滚动（默认为YES）
 */
@property (nonatomic, assign) BOOL autoLoopScroll;

/**
 *  自动滚动的时间间隔（单位为s）
 */
@property (nonatomic, assign) NSTimeInterval autoLoopScrollInterval;

/**
 *  是否有下拉动画 在对应的viewcontroller的 scrollViewDidScroll代理里实现wf_parallaxHeaderViewWithOffset方法  默认为no
 */
@property (nonatomic, assign) BOOL stretchAnimation;

//bannner数组 数据源
@property (nonatomic, strong) NSArray *banners;

- (void)reloadData;

- (void)wf_parallaxHeaderViewWithOffset:(CGPoint)offset;

@end
