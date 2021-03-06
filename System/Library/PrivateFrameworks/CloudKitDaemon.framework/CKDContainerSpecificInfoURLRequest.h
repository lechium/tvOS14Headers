/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:26 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSString, CKDContainerInfo;

@interface CKDContainerSpecificInfoURLRequest : CKDURLRequest {

	BOOL _requireUserIDs;
	NSString* _containerIdentifier;
	CKDContainerInfo* _containerInfo;

}

@property (nonatomic,copy) CKDContainerInfo * containerInfo;              //@synthesize containerInfo=_containerInfo - In the implementation block
@property (assign,nonatomic) BOOL requireUserIDs;                         //@synthesize requireUserIDs=_requireUserIDs - In the implementation block
@property (nonatomic,copy) NSString * containerIdentifier;                //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
-(id)url;
-(NSString *)containerIdentifier;
-(void)setContainerIdentifier:(NSString *)arg1 ;
-(long long)serverType;
-(long long)partitionType;
-(BOOL)usesiCloudAuthToken;
-(BOOL)usesCloudKitAuthToken;
-(void)requestDidParseJSONObject:(id)arg1 ;
-(BOOL)allowsAnonymousAccount;
-(BOOL)requiresConfiguration;
-(BOOL)allowsAuthedAccount;
-(BOOL)requiresDeviceID;
-(BOOL)hasRequestBody;
-(BOOL)requireUserIDs;
-(void)setContainerInfo:(CKDContainerInfo *)arg1 ;
-(CKDContainerInfo *)containerInfo;
-(id)initWithOperation:(id)arg1 containerIdentifier:(id)arg2 ;
-(void)setRequireUserIDs:(BOOL)arg1 ;
@end

