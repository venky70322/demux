

module tb;

    reg din;
    reg [1:0] sel;
    wire [3:0] y;

    // Instantiate DUT
    demux uut (
        .din(din),
        .sel(sel),
        .y(y)
    );

    initial begin
        // Monitor signals
        $monitor("Time=%0t | din=%b sel=%b | y=%b", $time, din, sel, y);

        // Test cases
        din = 1;

        sel = 2'b00; #10;
        sel = 2'b01; #10;
        sel = 2'b10; #10;
        sel = 2'b11; #10;

        din = 0;

        sel = 2'b00; #10;
        sel = 2'b01; #10;
        sel = 2'b10; #10;
        sel = 2'b11; #10;

        $finish;
    end

endmodule
