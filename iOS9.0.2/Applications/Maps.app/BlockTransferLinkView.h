/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:29 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>

@class NSLayoutConstraint, UIView, UIColor;

@interface BlockTransferLinkView : UIView {

	NSLayoutConstraint* _fromLinkHeightConstraint;
	NSLayoutConstraint* _separatorHeightConstraint;
	UIView* _fromLink;
	UIView* _separator;

}

@property (nonatomic,retain) UIColor * originColor; 
@property (nonatomic,retain) UIColor * separatorColor; 
@property (nonatomic,retain) UIColor * destinationColor; 
@property (nonatomic,retain) UIView * fromLink;                       //@synthesize fromLink=_fromLink - In the implementation block
@property (nonatomic,retain) UIView * separator;                      //@synthesize separator=_separator - In the implementation block
-(void)_setupInitialConstraints;
-(float)_linkWidth;
-(void)setOriginColor:(UIColor *)arg1 ;
-(void)setDestinationColor:(UIColor *)arg1 ;
-(UIView *)fromLink;
-(float)_separatorViewHeight;
-(id)_mkView;
-(UIColor *)destinationColor;
-(float)_fromLinkViewHeight;
-(void)setFromLink:(UIView *)arg1 ;
-(UIColor *)originColor;
-(void)setSeparator:(UIView *)arg1 ;
-(void)_createSubviews;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIColor *)separatorColor;
-(void)setSeparatorColor:(UIColor *)arg1 ;
-(UIView *)separator;
@end
