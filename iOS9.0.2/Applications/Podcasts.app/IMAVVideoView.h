/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:53 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol IMAVVideoViewDelegate;
@class AVPlayerLayer, UIView, UIImageView, UILabel, NSString, IMAVPlayer, UIImage;

@interface IMAVVideoView : UIView {

	AVPlayerLayer* _videoLayer;
	UIView* _airplayBackground;
	UIImageView* _airplayTVImage;
	UILabel* _airplayLabel;
	UILabel* _airplayRouteLabel;
	NSString* _airplayRouteName;
	char _airplayActive;
	char _externalDisplay;
	id<IMAVVideoViewDelegate> _delegate;
	IMAVPlayer* _player;
	UIImage* _customAirplayTVImage;

}

@property (assign,nonatomic,__weak) id<IMAVVideoViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char airplayActive;                                     //@synthesize airplayActive=_airplayActive - In the implementation block
@property (assign,nonatomic) char externalDisplay;                                   //@synthesize externalDisplay=_externalDisplay - In the implementation block
@property (nonatomic,readonly) char smallAirplayBackground; 
@property (nonatomic,retain) AVPlayerLayer * videoLayer;                             //@synthesize videoLayer=_videoLayer - In the implementation block
@property (nonatomic,retain) NSString * airplayRouteName;                            //@synthesize airplayRouteName=_airplayRouteName - In the implementation block
@property (assign,nonatomic,__weak) IMAVPlayer * player;                             //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) UIImage * customAirplayTVImage;                         //@synthesize customAirplayTVImage=_customAirplayTVImage - In the implementation block
-(void)setAirplayActive:(char)arg1 ;
-(void)setAirplayRouteName:(NSString *)arg1 ;
-(void)updateAirplayNoContentView;
-(void)layout:(char)arg1 ;
-(char)smallAirplayBackground;
-(char)airplayActive;
-(char)externalDisplay;
-(UIImage *)customAirplayTVImage;
-(void)setExternalDisplay:(char)arg1 ;
-(NSString *)airplayRouteName;
-(void)setCustomAirplayTVImage:(UIImage *)arg1 ;
-(AVPlayerLayer *)videoLayer;
-(void)setPlayer:(IMAVPlayer *)arg1 ;
-(IMAVPlayer *)player;
-(void)setDelegate:(id<IMAVVideoViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<IMAVVideoViewDelegate>)delegate;
-(void)willMoveToWindow:(id)arg1 ;
-(void)layoutSublayersOfLayer:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setVideoLayer:(AVPlayerLayer *)arg1 ;
@end
