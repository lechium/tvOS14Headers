/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CloudServices.framework/CloudServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSDictionary;


@protocol SRPClientRequest <NSObject>
@property (nonatomic,copy,readonly) NSString * dsid; 
@property (nonatomic,copy,readonly) NSString * recordLabel; 
@property (nonatomic,copy,readonly) NSString * recoveryPassphrase; 
@property (nonatomic,retain,readonly) NSDictionary * escrowRecord; 
@property (nonatomic,copy,readonly) NSString * recordID; 
@required
-(NSString *)dsid;
-(NSString *)recordID;
-(id)validateInput;
-(NSString *)recordLabel;
-(NSString *)recoveryPassphrase;
-(NSDictionary *)escrowRecord;

@end

