/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:08 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/PGPictureInPictureViewController.h>

@protocol AVPictureInPictureViewControllerDelegate;
@class AVPlayerController, AVPictureInPicturePlayerLayerView, NSString;

@interface AVPictureInPictureViewController : UIViewController <PGPictureInPictureViewController> {

	id<AVPictureInPictureViewControllerDelegate> _delegate;
	SCD_Struct_AV6 _delegateRespondsTo;
	AVPlayerController* _playerController;

}

@property (nonatomic,retain) AVPlayerController * playerController;                                              //@synthesize playerController=_playerController - In the implementation block
@property (nonatomic,readonly) AVPictureInPicturePlayerLayerView * pictureInPicturePlayerLayerView; 
@property (assign,nonatomic,__weak) id<AVPictureInPictureViewControllerDelegate> delegate; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char shouldShowAlternateActionButtonImage; 
@property (nonatomic,readonly) char shouldShowLoadingIndicator; 
+(id)keyPathsForValuesAffectingShouldShowAlternateActionButtonImage;
+(id)keyPathsForValuesAffectingShouldShowLoadingIndicator;
-(void)didAnimatePictureInPictureStop;
-(char)shouldShowLoadingIndicator;
-(void)actionButtonTapped;
-(void)willAnimatePictureInPictureStart;
-(id)initWithPictureInPicturePlayerLayerView:(id)arg1 ;
-(char)shouldShowAlternateActionButtonImage;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<AVPictureInPictureViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<AVPictureInPictureViewControllerDelegate>)delegate;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(AVPlayerController *)playerController;
-(void)setPlayerController:(AVPlayerController *)arg1 ;
-(AVPictureInPicturePlayerLayerView *)pictureInPicturePlayerLayerView;
@end

