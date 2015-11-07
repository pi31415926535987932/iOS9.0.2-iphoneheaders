/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:59 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CMKStillImageCaptureRequestDelegate <NSObject>
@optional
-(void)captureController:(id)arg1 willCaptureStillImageForRequest:(id)arg2;
-(void)captureController:(id)arg1 didCaptureStillImageForRequest:(id)arg2;
-(void)captureController:(id)arg1 didGenerateResponse:(id)arg2 forStillImageRequest:(id)arg3 error:(id)arg4;
-(void)captureController:(id)arg1 didFinishWriteForResponse:(id)arg2 forStillImageRequest:(id)arg3 error:(id)arg4;
-(void)captureController:(id)arg1 didCompleteResponse:(id)arg2 forStillImageRequest:(id)arg3 error:(id)arg4;

@end
