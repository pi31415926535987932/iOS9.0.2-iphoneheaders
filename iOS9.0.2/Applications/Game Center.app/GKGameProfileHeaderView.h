/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:09 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Game Center.app/Game Center
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Game Center/Game Center-Structs.h>
#import <UIKit/UICollectionReusableView.h>

@class GKGameRecord, UIImageView, GKLabel, GKBuyButton, UIView;

@interface GKGameProfileHeaderView : UICollectionReusableView {

	GKGameRecord* _game;
	UIImageView* _iconView;
	GKLabel* _ratingLabel;
	GKBuyButton* _buyButton;
	UIView* _spacerLeft;
	UIView* _spacerRight;

}

@property (nonatomic,retain) GKGameRecord * game;                  //@synthesize game=_game - In the implementation block
@property (nonatomic,retain) UIImageView * iconView;               //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) GKLabel * ratingLabel;                //@synthesize ratingLabel=_ratingLabel - In the implementation block
@property (nonatomic,retain) GKBuyButton * buyButton;              //@synthesize buyButton=_buyButton - In the implementation block
@property (nonatomic,retain) UIView * spacerLeft;                  //@synthesize spacerLeft=_spacerLeft - In the implementation block
@property (nonatomic,retain) UIView * spacerRight;                 //@synthesize spacerRight=_spacerRight - In the implementation block
+(Class)classForGame:(id)arg1 isPurchaseable:(char)arg2 ;
+(char)requiresConstraintBasedLayout;
-(void)updateIcon;
-(float)fittingHeightWithViewSize:(CGSize)arg1 viewMargin:(float)arg2 ;
-(GKBuyButton *)buyButton;
-(void)setBuyButton:(GKBuyButton *)arg1 ;
-(UIView *)spacerLeft;
-(void)setSpacerLeft:(UIView *)arg1 ;
-(UIView *)spacerRight;
-(void)setSpacerRight:(UIView *)arg1 ;
-(GKLabel *)ratingLabel;
-(void)setRatingLabel:(GKLabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(UIImageView *)iconView;
-(void)setIconView:(UIImageView *)arg1 ;
-(void)didUpdateModel;
-(void)setGame:(GKGameRecord *)arg1 ;
-(GKGameRecord *)game;
-(void)applyConstraints;
@end

