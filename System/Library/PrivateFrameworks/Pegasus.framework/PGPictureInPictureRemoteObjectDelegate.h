/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PGPictureInPictureRemoteObjectDelegate <NSObject>
@optional
-(BOOL)pictureInPictureRemoteObjectShouldAcceptSetupRequest:(id)arg1;
-(BOOL)pictureInPictureRemoteObjectShouldUpdateCancellationPolicyOnStart:(id)arg1;
-(BOOL)pictureInPictureRemoteObjectShouldCancelActivePictureInPictureOnStart:(id)arg1;
-(void)pictureInPictureRemoteObject:(id)arg1 didRequestPictureInPictureStopForViewController:(id)arg2 sourceSceneSessionIdentifier:(id)arg3 animated:(BOOL)arg4;
-(void)pictureInPictureRemoteObject:(id)arg1 didCreatePictureInPictureViewController:(id)arg2;
-(void)pictureInPictureRemoteObject:(id)arg1 willShowPictureInPictureViewController:(id)arg2;
-(void)pictureInPictureRemoteObject:(id)arg1 didShowPictureInPictureViewController:(id)arg2;
-(void)pictureInPictureRemoteObject:(id)arg1 willHidePictureInPictureViewController:(id)arg2;
-(void)pictureInPictureRemoteObject:(id)arg1 didHidePictureInPictureViewController:(id)arg2;
-(void)pictureInPictureRemoteObject:(id)arg1 willDestroyPictureInPictureViewController:(id)arg2;

@end

