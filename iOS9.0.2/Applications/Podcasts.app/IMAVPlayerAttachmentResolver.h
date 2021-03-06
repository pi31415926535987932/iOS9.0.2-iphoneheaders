/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:56 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/IMAttachmentResolving.h>

@class IMAVPlayer, NSString;

@interface IMAVPlayerAttachmentResolver : NSObject <IMAttachmentResolving> {

	IMAVPlayer* _player;

}

@property (nonatomic,retain) IMAVPlayer * player;                   //@synthesize player=_player - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)canResolveAttachmentInfo:(id)arg1 ;
-(char)supportsAttachmentResolvingOption:(int)arg1 ;
-(void)resolveAttachmentInfo:(id)arg1 context:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)setPlayer:(IMAVPlayer *)arg1 ;
-(IMAVPlayer *)player;
-(void)dealloc;
@end

