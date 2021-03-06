/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:23 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/InCallService.app/InCallService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol DialerLCDFieldProtocol <NSObject>
@optional
-(void)setName:(id)arg1 numberLabel:(id)arg2 suggestion:(char)arg3;
-(void)setName:(id)arg1 numberLabel:(id)arg2;
-(void)setText:(id)arg1 needsFormat:(char)arg2 name:(id)arg3 label:(id)arg4;

@required
-(char)inCallMode;
-(id)unformattedText;
-(void)setText:(id)arg1 needsFormat:(char)arg2;
-(void)deleteCharacter;
-(void)setInCallMode:(char)arg1;
-(void)setDelegate:(id)arg1;
-(id)text;
-(void)setHighlighted:(char)arg1;
-(char)highlighted;

@end

