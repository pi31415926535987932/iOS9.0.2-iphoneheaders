/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:51 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class GEOActiveTileGroup;


@protocol GEOResourceManifestServerProxy <NSObject>
@property (assign,nonatomic) id<GEOResourceManifestServerProxyDelegate> delegate; 
@property (nonatomic,readonly) GEOActiveTileGroup * activeTileGroup; 
@required
-(void)setDelegate:(id)arg1;
-(id<GEOResourceManifestServerProxyDelegate>)delegate;
-(id)configuration;
-(id)authToken;
-(oneway void)setActiveTileGroupIdentifier:(id)arg1;
-(GEOActiveTileGroup *)activeTileGroup;
-(void)setManifestToken:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)getResourceManifestWithHandler:(/*^block*/id)arg1;
-(oneway void)resetActiveTileGroup;
-(void)updateIfNecessary:(/*^block*/id)arg1;
-(void)forceUpdate:(/*^block*/id)arg1;
-(void)openConnection;
-(id)initWithDelegate:(id)arg1 configuration:(id)arg2;
-(void)closeConnection;
-(id)serverQueue;

@end

