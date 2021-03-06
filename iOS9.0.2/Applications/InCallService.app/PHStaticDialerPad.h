/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:24 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/InCallService.app/InCallService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <InCallService/InCallService-Structs.h>
#import <TelephonyUI/TPPhonePad.h>

@interface PHStaticDialerPad : TPPhonePad {

	int _dialerType;

}

@property (assign) int dialerType;              //@synthesize dialerType=_dialerType - In the implementation block
-(void)setDialerType:(int)arg1 ;
-(int)dialerType;
-(id)initWithDialerType:(int)arg1 ;
-(id)_highlightedImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(char)canBecomeFocused;
-(CGSize)intrinsicContentSize;
-(id)_keypadImage;
-(float)_yFudge;
-(id)_pressedImage;
@end

