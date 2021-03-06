/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/ICRequestOperation.h>

@class ICStoreRequestContext, NSString, ICStoreURLRequest;

@interface ICSongDownloadDoneRequest : ICRequestOperation {

	ICStoreRequestContext* _requestContext;
	NSString* _downloadIdentifier;
	unsigned long long _songID;
	ICStoreURLRequest* _storeURLRequest;

}
-(void)cancel;
-(void)execute;
-(void)performRequestWithResponseHandler:(/*^block*/id)arg1 ;
-(id)initWithRequestContext:(id)arg1 downloadIdentifier:(id)arg2 songID:(unsigned long long)arg3 ;
@end

