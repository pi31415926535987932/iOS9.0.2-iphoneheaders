/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:18 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class UIScrollView;


@protocol BKTOCViewControllerProtocol <NSObject>
@property (assign,nonatomic) id<BKTOCViewControllerDelegate> directoryDelegate; 
@property (assign,nonatomic) UIEdgeInsets centeringInsets; 
@property (assign,nonatomic) NSObject*<BKContentViewControllerLayoutDelegate> layoutDelegate; 
@property (assign,getter=isVertical,nonatomic) char vertical; 
@property (nonatomic,readonly) UIScrollView * scrollView; 
@required
-(id<BKTOCViewControllerDelegate>)directoryDelegate;
-(void)setDirectoryDelegate:(id)arg1;
-(UIEdgeInsets)centeringInsets;
-(void)setCenteringInsets:(UIEdgeInsets)arg1;
-(NSObject*<BKContentViewControllerLayoutDelegate>)layoutDelegate;
-(void)setLayoutDelegate:(id)arg1;
-(void)reload;
-(UIScrollView *)scrollView;
-(void)updateView;
-(char)isVertical;
-(void)setVertical:(char)arg1;

@end

