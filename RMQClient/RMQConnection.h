#import <Foundation/Foundation.h>
#import "RMQTransport.h"
#import "RMQChannelAllocator.h"
#import "AMQProtocolValues.h"
#import "RMQFrameHandler.h"
#import "RMQSender.h"

@interface RMQConnection : NSObject<RMQFrameHandler, RMQSender>
@property (copy, nonatomic, readonly) NSString *vhost;

- (instancetype)initWithTransport:(id<RMQTransport>)transport
                             user:(NSString *)user
                         password:(NSString *)password
                            vhost:(NSString *)vhost
                       channelMax:(NSNumber *)channelMax
                         frameMax:(NSNumber *)frameMax
                        heartbeat:(NSNumber *)heartbeat;
- (RMQConnection *)start;
- (void)close;
- (id<RMQChannel>)createChannel;
@end
