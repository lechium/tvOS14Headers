/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:16 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFRemoteExecutionSession.h>

@class NSURL, NSString;

@interface WFRemoteExecutionOutgoingFileSession : WFRemoteExecutionSession {

	NSURL* _fileURL;
	NSString* _transferIdentifier;
	NSString* _requestIdentifier;

}

@property (nonatomic,retain) NSURL * fileURL;                            //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,retain) NSString * transferIdentifier;              //@synthesize transferIdentifier=_transferIdentifier - In the implementation block
@property (nonatomic,retain) NSString * requestIdentifier;               //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
+(long long)version;
+(BOOL)supportsVersion:(long long)arg1 ;
-(NSURL *)fileURL;
-(void)setFileURL:(NSURL *)arg1 ;
-(NSString *)requestIdentifier;
-(void)finishWithError:(id)arg1 ;
-(void)setRequestIdentifier:(NSString *)arg1 ;
-(NSString *)transferIdentifier;
-(id)initWithService:(id)arg1 fileURL:(id)arg2 transferIdentifier:(id)arg3 requestIdentifier:(id)arg4 ;
-(BOOL)sendToDestinations:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)fileSentWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(void)setTransferIdentifier:(NSString *)arg1 ;
@end
