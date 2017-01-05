//
//  UIView+Position.h
//  CRBoost
//
//  Created by Eric Wu on 9/13/13.
//  Copyright (c) 2013 Cocoa. All rights reserved.
//



typedef void(^KeyboardStateTask)(CGRect rect);

@interface UIView (CRBoost)

@property (nonatomic, assign) CGFloat x;
@property (nonatomic, assign) CGFloat y;
@property (nonatomic, assign) CGFloat width;
@property (nonatomic, assign) CGFloat height;

@property (nonatomic, assign) CGFloat rightMostX; //max x
@property (nonatomic, assign) CGFloat topY; //max y

@property (nonatomic, assign) CGPoint origin;
@property (nonatomic, assign) CGPoint bottomRightPoint;
@property (nonatomic, assign) CGPoint bottomLeftPoint;

@property (nonatomic, assign) CGPoint topLeftPoint;
@property (nonatomic, assign) CGPoint topRightPoint;

@property (nonatomic, assign) CGSize size;
@property (nonatomic, assign) CGSize boundSize;
@property (nonatomic, assign) CGFloat cornerRadius;


+ (instancetype)viewWithSize:(CGSize)size;
+ (instancetype)viewWithFrame:(CGRect)frame;
+ (UIView *)viewWithColor:(UIColor *)color size:(CGSize)size;
+ (UIView *)viewByRoundingAndStrokingImage:(UIImage *)image;


- (UIView *)topLayerSubviewWithTag:(NSInteger)tag;
- (id)ancestorViewOfKind:(Class)kind;
- (id)childrenViewOfKind:(Class)kind;
- (void)pulsateOnce;


//geometry
- (void)centerHorizontally;
- (void)centerVertically;
- (void)centerInSuperview;


//keyboard
- (void)setupTaskOnKeybardWillShow:(KeyboardStateTask)task;
- (void)setupTaskOnKeybardWillHide:(KeyboardStateTask)task;
- (void)cleanupKeyboardWillShowObserver;
- (void)cleanupKeyboardWillHideObserver;


//gesture
- (UITapGestureRecognizer *)addTapRecognizer:(id)target action:(SEL)action;
- (UIPanGestureRecognizer *)addPanRecognizer:(id)target action:(SEL)action;


//transition
- (void)transitToSubview:(UIView *)view option:(UIViewAnimationOptions)option duration:(CGFloat)duration;



/**
 * add a top banner to the view, same width as self
 *
 * @param height: the height of the top banner
 * @discussion be careful when use this method, the top banner should be at the bottom of the view hierarchy
 */
- (void)setupTopBannerColored:(UIColor *)color height:(CGFloat)height;
/**
 * should call this method after sendSubviewToBack: excuted when the top banner exists.
 */
- (void)sendTopBannerToBack;
@end
